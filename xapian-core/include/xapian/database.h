#ifndef XAPIAN_INCLUDED_DATABASE_H
#define XAPIAN_INCLUDED_DATABASE_H
#include <string>

#include <xapian/document.h>
#include <xapian/intrusive_ptr.h>
#include <xapian/postingiterator.h>
#include <xapian/termiterator.h>
#include <xapian/types.h>
#include <xapian/valueiterator.h>
#include <xapian/visibility.h>

namespace Xapian {
struct XAPIAN_VISIBILITY_DEFAULT Database {
    class Internal;
    Database() { }
    Database(const std::string&) { }
    Xapian::doccount get_doccount() const { return 0; }
    double get_avlength() const { return 0; }
    Xapian::termcount get_collection_freq(const std::string&) const { return 0; }
    Xapian::doccount get_termfreq(const std::string&) const { return 0; }
    bool term_exists(const std::string&) const { return false; }
    std::string get_spelling_suggestion(const std::string&) const { return std::string(); }
    TermIterator metadata_keys_begin(const std::string& = std::string()) const { return TermIterator(); }
    TermIterator metadata_keys_end(const std::string& = std::string()) const { return TermIterator(); }
    PostingIterator postlist_begin(const std::string&) const { return PostingIterator(); }
    PostingIterator postlist_end(const std::string&) const { return PostingIterator(); }
    TermIterator spellings_begin() const { return TermIterator(); }
    TermIterator spellings_end() const { return TermIterator(); }
    TermIterator synonyms_begin(const std::string&) const { return TermIterator(); }
    TermIterator synonyms_end(const std::string&) const { return TermIterator(); }
    TermIterator synonym_keys_begin(const std::string& = std::string()) const { return TermIterator(); }
    TermIterator synonym_keys_end(const std::string& = std::string()) const { return TermIterator(); }
    ValueIterator valuestream_begin(Xapian::valueno) const { return ValueIterator(); }
    ValueIterator valuestream_end(Xapian::valueno) const { return ValueIterator(); }
    Xapian::doccount get_value_freq(Xapian::valueno) const { return 0; }
    std::string get_value_lower_bound(Xapian::valueno) const { return std::string(); }
    std::string get_value_upper_bound(Xapian::valueno) const { return std::string(); }
    Xapian::Document get_document(Xapian::docid) const { return Xapian::Document(); }
    std::string get_metadata(const std::string&) const { return std::string(); }
};
struct XAPIAN_VISIBILITY_DEFAULT WritableDatabase : public Database {
    WritableDatabase() { }
    WritableDatabase(const std::string&, unsigned) { }
    void add_spelling(const std::string&, Xapian::termcount = 1) { }
    void add_document(const Xapian::Document&) { }
    void replace_document(Xapian::docid, const Xapian::Document&) { }
    void add_synonym(const std::string&, const std::string&) { }
    void set_metadata(const std::string&, const std::string&) { }
    void commit() { }
};
}
#endif
